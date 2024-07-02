def generate_highlights_scm(rules):
    highlights = []

    def add_highlight(node_type, capture_name):
        if node_type in rules:
            highlights.append(f'({node_type}) @{capture_name}')

    # More specific function-related highlights
    add_highlight('function', 'aiken.function')
    add_highlight('validator', 'aiken.function.validator')
    add_highlight('test', 'aiken.function.test')
    add_highlight('function_argument', 'aiken.function.parameter')

    # More specific type-related highlights
    add_highlight('type_alias', 'aiken.type.alias')
    add_highlight('type_enum', 'aiken.type.enum')
    add_highlight('type_struct', 'aiken.type.struct')
    add_highlight('type_identifier', 'aiken.type.name')
    add_highlight('type_argument', 'aiken.type.argument')

    # Variable and constant highlights
    add_highlight('identifier', 'aiken.variable')
    add_highlight('constant', 'aiken.constant')

    # Literal highlights
    add_highlight('string', 'aiken.string')
    add_highlight('int', 'aiken.number')
    add_highlight('bool', 'aiken.boolean')
    add_highlight('bytes', 'aiken.bytes')

    # Comment highlights
    add_highlight('comment', 'comment')
    add_highlight('module_comment', 'comment.documentation.module')
    add_highlight('definition_comment', 'comment.documentation.definition')

    # Aiken-specific constructs
    add_highlight('match_pattern', 'aiken.pattern')
    add_highlight('field_access', 'aiken.field')
    add_highlight('call', 'aiken.function.call')
    add_highlight('pipeline', 'aiken.operator.pipeline')
    add_highlight('trace', 'aiken.debug.trace')
    add_highlight('error_term', 'aiken.error')

    # Control flow
    add_highlight('if', 'aiken.control.conditional')
    add_highlight('when', 'aiken.control.when')

    # Keywords
    keywords = ['use', 'pub', 'opaque', 'type', 'fn', 'validator', 'test', 'let', 'expect', 'when', 'is', 'if', 'else', 'and', 'or', 'trace', 'fail', 'as']
    for keyword in keywords:
        highlights.append(f'"{keyword}" @aiken.keyword')

    # Special keywords
    add_highlight('todo', 'aiken.keyword.todo')

    # Operators
    operators = ['!', '-', '+', '*', '/', '%', '==', '!=', '<', '<=', '>', '>=', '&&', '||', '|>']
    for operator in operators:
        highlights.append(f'"{operator}" @aiken.operator')

    return '\n'.join(highlights)
