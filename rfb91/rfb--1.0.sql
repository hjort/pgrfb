CREATE FUNCTION cpf_valido(int8)
	RETURNS boolean
	AS 'MODULE_PATHNAME', 'pg_cpf_valido'
	LANGUAGE 'C'
	IMMUTABLE STRICT;
