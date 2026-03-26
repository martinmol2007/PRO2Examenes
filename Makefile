save:
	@echo Subiendo cambios...
	@git add .
	@git commit -m "Cambios"
	@git push
	@clear
	@echo Todo guardado y subido a GitHub!
.PHONY: save