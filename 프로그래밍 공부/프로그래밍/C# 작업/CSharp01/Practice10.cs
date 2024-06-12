/*using System;
using System.Collections.Generic;
using System.Text;

namespace CSharp01
{
    enum ItemType
    {
        Weapon,
        Armor,
        Amulet,
        Ring
    }

    enum Rarity
    {
        Normal,
        Uncommon,
        Rare,
    }

    class Item
    {
        public ItemType ItemType; 
        public Rarity Rarity;
    }
    class Practice10
    {
        static List<Item> _items = new List<Item>();

        static Item FindItem(Func<Item, bool> selector)
        {
            foreach (Item item in _items) 
            {
                if (selector(item))
                {
                    return item;
                }
            }
            return null;
        }

        static void Main(string[] args)
        {
            _items.Add(new Item() { ItemType = ItemType.Weapon, Rarity = Rarity.Normal });
            _items.Add(new Item() { ItemType = ItemType.Armor, Rarity = Rarity.Uncommon });
            _items.Add(new Item() { ItemType = ItemType.Ring, Rarity = Rarity.Rare });

            // delegate를 직접 선언하지 않아도, 이미 만들어진 애들도 존재한다
            // -> 반환 타입이 있으면 Func
            // -> 반환 타입이 없으면 Action

            // Lambda : 일회용 함수를 만드는데 사용하는 문법
            Func<Item, bool> selector = (Item item) => { return item.ItemType == ItemType.Weapon; };

            // Anonymous Function : 무명 함수
            //Item item = FindItem(delegate (Item item) { return item.ItemType == ItemType.Weapon; });
        }
    }
}*/
