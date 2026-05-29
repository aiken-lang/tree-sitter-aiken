use tree_sitter_language::LanguageFn;

extern "C" {
    fn tree_sitter_aiken() -> *const ();
}

pub const LANGUAGE: LanguageFn = unsafe { LanguageFn::from_raw(tree_sitter_aiken) };

pub const NODE_TYPES: &str = include_str!("../../src/node-types.json");

#[cfg(test)]
mod tests {
    #[test]
    fn test_can_load_grammar() {
        let mut parser = tree_sitter::Parser::new();
        let language: tree_sitter::Language = super::LANGUAGE.into();
        parser
            .set_language(&language)
            .expect("Error loading aiken language");
    }
}
