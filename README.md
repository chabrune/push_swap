# Push_swap - Algorithme de Tri avec Radix Sort

Une implémentation efficace de tri de pile utilisant la méthode Radix Sort.

## 📝 Description

Push_swap est un projet d'algorithmie qui consiste à trier des données dans une pile avec un set d'instructions limité, en utilisant deux piles (a et b) et en minimisant le nombre d'opérations.

## 🛠️ Instructions Disponibles

| Instruction | Description |
|-------------|-------------|
| sa | Swap les 2 premiers éléments de la pile a |
| sb | Swap les 2 premiers éléments de la pile b |
| ss | sa et sb simultanément |
| pa | Push le premier élément de b vers a |
| pb | Push le premier élément de a vers b |
| ra | Rotate la pile a (premier devient dernier) |
| rb | Rotate la pile b (premier devient dernier) |
| rr | ra et rb simultanément |
| rra | Reverse rotate pile a (dernier devient premier) |
| rrb | Reverse rotate pile b (dernier devient premier) |
| rrr | rra et rrb simultanément |

## ⚡ Algorithme Implémenté

Utilisation de l'algorithme **Radix Sort** pour optimiser le tri :
- Complexité temporelle : O(n * log n)
- Approche par tri des bits
- Particulièrement efficace pour les grands ensembles de données

## 📊 Performance

- **100 nombres** : < 700 opérations
- **500 nombres** : < 5500 opérations

## ⚙️ Compilation

```bash
make        # Compile le programme
make clean  # Nettoie les fichiers objets
make fclean # Nettoie tout
make re     # Recompile
```

## 🔍 Utilisation

```bash
./push_swap 2 1 3 6 5 8
```

## ⚠️ Gestion d'Erreurs
- Vérifie les doublons
- Valide les entiers
- Gère les overflows

---
*Projet réalisé dans le cadre du cursus de l'école 42*
