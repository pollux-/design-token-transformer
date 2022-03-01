//[app](../../index.md)/[io.material.materialthemebuilder.ui.themesummary](index.md)

# Package io.material.materialthemebuilder.ui.themesummary

## Types

| Name | Summary |
|---|---|
| [Subsystem](-subsystem/index.md) | [androidJvm]<br>enum [Subsystem](-subsystem/index.md) : [Enum](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-enum/index.html)&lt;[Subsystem](-subsystem/index.md)&gt; <br>Enumeration of all subsystems to be displayed by [SubsystemAdapter](-subsystem-adapter/index.md). |
| [SubsystemAdapter](-subsystem-adapter/index.md) | [androidJvm]<br>class [SubsystemAdapter](-subsystem-adapter/index.md) : [ListAdapter](https://developer.android.com/reference/kotlin/androidx/recyclerview/widget/ListAdapter.html)&lt;[Subsystem](-subsystem/index.md), [SubsystemViewHolder](-subsystem-view-holder/index.md)&gt; <br>Adapter to display [Subsystem](-subsystem/index.md)s using their corresponding [SubsystemViewHolder](-subsystem-view-holder/index.md). |
| [SubsystemViewHolder](-subsystem-view-holder/index.md) | [androidJvm]<br>sealed class [SubsystemViewHolder](-subsystem-view-holder/index.md) : [RecyclerView.ViewHolder](https://developer.android.com/reference/kotlin/androidx/recyclerview/widget/RecyclerView.ViewHolder.html)<br>Sealed class to define all [RecyclerView.ViewHolder](https://developer.android.com/reference/kotlin/androidx/recyclerview/widget/RecyclerView.ViewHolder.html)s used to display [Subsystem](-subsystem/index.md)s. |
| [ThemeSummaryFragment](-theme-summary-fragment/index.md) | [androidJvm]<br>class [ThemeSummaryFragment](-theme-summary-fragment/index.md) : [Fragment](https://developer.android.com/reference/kotlin/androidx/fragment/app/Fragment.html)<br>Fragment to display a list of subsystems that show the values of this app's theme. |
