public enum PokemonMoveEnum
{
    TailWhip,
    Tackle,
    Covet,
    Growl,
    Charm,
    NastyPlot,
    Nuzzle,
    PlayNice,
    QuickAttack,
    SweetKiss,
    ThunderShock,
    Scratch
}

public enum MoveEffects
{
    None,
    Attack,
    Defense,
    Special,
    Confused,
    Paralyze
}

public enum MoveCategory
{
    Physical,
    Status,
    Special
}

public struct Status
{
    public MoveEffects effect;
    public int stageChange;
    public bool targetSelf;

    public Status(MoveEffects effect, int stageChange = 0)
    {
        this.effect = effect;
        this.stageChange = stageChange;
        targetSelf = stageChange > 0 ? true : false;
    }
}

public abstract class PokemonMove
{
    public virtual string Name { get; }
    public virtual string DisplayName { get; }
    public virtual MoveCategory Category { get; }
    public virtual PokemonType Type { get; }
    public virtual int Power { get; }
    public virtual Status Status { get; }
    public virtual int PP { get; }
    public virtual int CurrentPP { get; set; }
    public virtual int Accuracay { get; }
}

public class TailWhip : PokemonMove
{
    public override string Name { get { return "TailWhip"; } }
    public override string DisplayName { get { return "Tail Whip"; } }
    public override MoveCategory Category { get { return MoveCategory.Status; } }
    public override PokemonType Type { get { return PokemonType.Normal; } }
    public override int Power { get { return 0; } }
    public override Status Status { get { return new Status(MoveEffects.Defense, -1); } }
    public override int PP { get { return 30; } }
    public override int CurrentPP { get; set; }
    public override int Accuracay { get { return 100; } }
}

public class Tackle : PokemonMove
{
    public override string Name { get { return "Tackle"; } }
    public override string DisplayName { get { return Name; } }
    public override MoveCategory Category { get { return MoveCategory.Physical; } }
    public override PokemonType Type { get { return PokemonType.Normal; } }
    public override int Power { get { return 40; } }
    public override Status Status { get { return new Status(MoveEffects.None); } }
    public override int PP { get { return 35; } }
    public override int CurrentPP { get; set; }
    public override int Accuracay { get { return 100; } }
}

public class Covet : PokemonMove
{
    public override string Name { get { return "Covet"; } }
    public override string DisplayName { get { return Name; } }
    public override MoveCategory Category { get { return MoveCategory.Physical; } }
    public override PokemonType Type { get { return PokemonType.Normal; } }
    public override int Power { get { return 60; } }
    public override Status Status { get { return new Status(MoveEffects.None); } }
    public override int PP { get { return 25; } }
    public override int CurrentPP { get; set; }
    public override int Accuracay { get { return 100; } }
}

public class Growl : PokemonMove
{
    public override string Name { get { return "Growl"; } }
    public override string DisplayName { get { return Name; } }
    public override MoveCategory Category { get { return MoveCategory.Status; } }
    public override PokemonType Type { get { return PokemonType.Normal; } }
    public override int Power { get { return 0; } }
    public override Status Status { get { return new Status(MoveEffects.Attack, -1); } }
    public override int PP { get { return 40; } }
    public override int CurrentPP { get; set; }
    public override int Accuracay { get { return 100; } }
}

public class Charm : PokemonMove
{
    public override string Name { get { return "Charm"; } }
    public override string DisplayName { get { return Name; } }
    public override MoveCategory Category { get { return MoveCategory.Status; } }
    public override PokemonType Type { get { return PokemonType.Fairy; } }
    public override int Power { get { return 0; } }
    public override Status Status { get { return new Status(MoveEffects.Attack, -2); } }
    public override int PP { get { return 20; } }
    public override int CurrentPP { get; set; }
    public override int Accuracay { get { return 100; } }
}

public class NastyPlot : PokemonMove
{
    public override string Name { get { return "NastyPlot"; } }
    public override string DisplayName { get { return "Nasty Plot"; } }
    public override MoveCategory Category { get { return MoveCategory.Status; } }
    public override PokemonType Type { get { return PokemonType.Dark; } }
    public override int Power { get { return 0; } }
    public override Status Status { get { return new Status(MoveEffects.Special, 2); } }
    public override int PP { get { return 20; } }
    public override int CurrentPP { get; set; }
    public override int Accuracay { get { return 100; } }
}

public class Nuzzle : PokemonMove
{
    public override string Name { get { return "Nuzzle"; } }
    public override string DisplayName { get { return Name; } }
    public override MoveCategory Category { get { return MoveCategory.Physical; } }
    public override PokemonType Type { get { return PokemonType.Electric; } }
    public override int Power { get { return 20; } }
    public override Status Status { get { return new Status(MoveEffects.None); } }
    public override int PP { get { return 20; } }
    public override int CurrentPP { get; set; }
    public override int Accuracay { get { return 100; } }
}

public class PlayNice : PokemonMove
{
    public override string Name { get { return "PlayNice"; } }
    public override string DisplayName { get { return "Play Nice"; } }
    public override MoveCategory Category { get { return MoveCategory.Status; } }
    public override PokemonType Type { get { return PokemonType.Normal; } }
    public override int Power { get { return 0; } }
    public override Status Status { get { return new Status(MoveEffects.Attack, -1); } }
    public override int PP { get { return 20; } }
    public override int CurrentPP { get; set; }
    public override int Accuracay { get { return 100; } }
}

public class QuickAttack : PokemonMove
{
    public override string Name { get { return "QuickAttack"; } }
    public override string DisplayName { get { return "Quick Attack"; } }
    public override MoveCategory Category { get { return MoveCategory.Physical; } }
    public override PokemonType Type { get { return PokemonType.Normal; } }
    public override int Power { get { return 40; } }
    public override Status Status { get { return new Status(MoveEffects.None); } }
    public override int PP { get { return 30; } }
    public override int CurrentPP { get; set; }
    public override int Accuracay { get { return 100; } }
}

public class SweetKiss : PokemonMove
{
    public override string Name { get { return "SweetKiss"; } }
    public override string DisplayName { get { return "Sweet Kiss"; } }
    public override MoveCategory Category { get { return MoveCategory.Status; } }
    public override PokemonType Type { get { return PokemonType.Fairy; } }
    public override int Power { get { return 0; } }
    public override Status Status { get { return new Status(MoveEffects.Confused); } }
    public override int PP { get { return 10; } }
    public override int CurrentPP { get; set; }
    public override int Accuracay { get { return 75; } }
}

public class ThunderShock : PokemonMove
{
    public override string Name { get { return "ThunderShock"; } }
    public override string DisplayName { get { return "Thunder Shock"; } }
    public override MoveCategory Category { get { return MoveCategory.Special; } }
    public override PokemonType Type { get { return PokemonType.Electric; } }
    public override int Power { get { return 40; } }
    public override Status Status { get { return new Status(MoveEffects.Paralyze); } }
    public override int PP { get { return 30; } }
    public override int CurrentPP { get; set; }
    public override int Accuracay { get { return 100; } }
}

public class Scratch : PokemonMove
{
    public override string Name { get { return "Scratch"; } }
    public override string DisplayName { get { return Name; } }
    public override MoveCategory Category { get { return MoveCategory.Physical; } }
    public override PokemonType Type { get { return PokemonType.Normal; } }
    public override int Power { get { return 40; } }
    public override int PP { get { return 35; } }
    public override int CurrentPP { get; set; }
    public override int Accuracay { get { return 100; } }
}

