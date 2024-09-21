modded class CraftBoneBait
{
    override bool CanDo(ItemBase ingredients[], PlayerBase player)
    {
        if (!super.CanDo(ingredients, player))
        {
            return false;
        }

        return ingredients[1].GetQuantity() == 1;
    }
};
