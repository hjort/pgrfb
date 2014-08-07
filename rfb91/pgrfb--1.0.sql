CREATE FUNCTION cpf_valido(int8)
	RETURNS boolean
	AS 'MODULE_PATHNAME', 'pg_cpf_valido'
	LANGUAGE 'C'
	IMMUTABLE STRICT;

CREATE FUNCTION incluir_dv_cpf(int8)
	RETURNS int8
	AS 'MODULE_PATHNAME', 'pg_incluir_dv_cpf'
	LANGUAGE 'C'
	IMMUTABLE STRICT;

