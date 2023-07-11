{
  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs";
    rust-overlay.url = "github:oxalica/rust-overlay";
    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, rust-overlay, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs = import nixpkgs {
          inherit system;
          overlays = [ rust-overlay.overlays.default ];
        };

        osxDependencies = with pkgs;
          lib.optionals stdenv.isDarwin
          [ darwin.apple_sdk.frameworks.Security ];
      in {
        devShell = pkgs.mkShell {
          packages = with pkgs;
            [
              nodejs
              nodePackages.pnpm
              tree-sitter
              (rust-bin.stable.latest.default.override {
                extensions = [ "rust-src" "clippy" "rustfmt" ];
              })
            ] ++ osxDependencies;
        };
      });
}
