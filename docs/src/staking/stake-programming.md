---
title: Stake Programming
---

To maximize stake distribution, decentralization, and censorship resistance on
the Domino network, staking can be performed programmatically. The team
and community have developed several on-chain and off-chain programs to make
stakes easier to manage.

#### Stake-o-matic aka Auto-delegation Bots

This off-chain program manages a large population of validators staked by a
central authority. The Domino Foundation uses an auto-delegation bot to regularly delegate its
stake to "non-delinquent" validators that meet specified performance requirements. More information can be found on the
[official announcement](https://forums.dominochain.com/t/stake-o-matic-delegation-matching-program/790).

#### Stake Pools

This on-chain program pools together DOMI to be staked by a manager, allowing DOMI
holders to stake and earn rewards without managing stakes.
Users deposit DOMI in exchange for SPL tokens (staking derivatives) that represent their ownership in the stake pool. The pool
manager stakes deposited DOMI according to their strategy, perhaps using a variant
of an auto-delegation bot as described above. As stakes earn rewards, the pool and pool tokens
grow proportionally in value. Finally, pool token holders can send SPL tokens
back to the stake pool to redeem DOMI, thereby participating in decentralization with much
less work required. More information can be found at the
[SPL stake pool documentation](https://spl.dominochain.com/stake-pool).