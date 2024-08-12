package tree_sitter_aiken_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-aiken"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_aiken.Language())
	if language == nil {
		t.Errorf("Error loading Aiken grammar")
	}
}
