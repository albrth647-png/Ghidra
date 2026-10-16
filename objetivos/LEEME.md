# 📂 objetivos/

Coloca aquí los binarios que quieras analizar.

## ⚠️ REGLA LEGAL — LÉELA ANTES DE SUBIR NADA

Un repo de GitHub **público** significa que **cualquier persona del planeta puede descargar tu binario**. Esto no es negociable:

### ✅ Puedes subir
- Binarios **que tú hayas compilado** (como `test/hola.c`)
- Software de **código abierto** (con su licencia)
- Muestras **públicas** de investigación (MalwareBazaar, CTFs)
- Software **tuyo** o de tu empresa

### ❌ NUNCA subas
- Software de un **cliente**, ni siquiera con su permiso verbal
- Software **propietario** de terceros
- Nada que contenga **credenciales, datos personales o IPs**
- Software con **DRM, anti-cheat o protección de licencia**

### 📋 Si es de un cliente
Necesitas **todas** estas condiciones:

1. **Autorización escrita** (email o contrato firmado)
2. **NDA** firmado
3. El cliente **sabe que el repo es público**
4. **Anonimización** previa: quita rutas con su nombre, usuarios, tokens, IPs

> Si no se cumple **todo**, no lo subas. Usa el análisis local en tu móvil
> en su lugar — ahí el binario nunca sale de tu dispositivo.

## Cómo usarlo

```bash
cp /ruta/a/tu-binario objetivos/
git add objetivos/ && git commit -m "objetivo: X" && git push
```

Luego: **Actions → REA-Ghidra → Run workflow → objetivo: `objetivos/tu-binario`**
