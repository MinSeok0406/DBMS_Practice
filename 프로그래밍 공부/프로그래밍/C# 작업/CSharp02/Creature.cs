using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharp02
{
    public enum CreatureType
    {
        None = 0,
        Player = 1,
        Monster = 2
    }
    class Creature
    {
        CreatureType type = CreatureType.None;
        protected int hp = 0;
        protected int attack = 0;
        protected int defence = 0;
        protected int level = 0;

        public Creature(CreatureType type)
        {
            this.type = type;
        }

        public int GetHp() { return hp; }
        public int GetAttack() { return attack; }
        public int GetDefence() { return defence; }
        public int GetLevel() { return level; }
        public bool IsDead() { return hp <= 0; }
        public void OnDamaged(int damage)
        {
            hp -= damage;
            if (hp < 0)
            {
                hp = 0;
            }
        }
        public void SetInfo(int hp, int attack, int defence, int level)
        {
            this.hp = hp;
            this.attack = attack;
            this.defence = defence;
            this.level = level;
        }
    }
}
