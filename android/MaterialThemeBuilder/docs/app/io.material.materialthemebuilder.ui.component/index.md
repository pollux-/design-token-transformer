//[app](../../index.md)/[io.material.materialthemebuilder.ui.component](index.md)

# Package io.material.materialthemebuilder.ui.component

## Types

| Name | Summary |
|---|---|
| [BottomSheetFragment](-bottom-sheet-fragment/index.md) | [androidJvm]<br>class [BottomSheetFragment](-bottom-sheet-fragment/index.md) : BottomSheetDialogFragment<br>A simple Modal Bottom Sheet. |
| [Component](-component/index.md) | [androidJvm]<br>enum [Component](-component/index.md) : [Enum](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-enum/index.html)&lt;[Component](-component/index.md)&gt; <br>Enumeration of all components to be displayed by [ComponentAdapter](-component-adapter/index.md). |
| [ComponentAdapter](-component-adapter/index.md) | [androidJvm]<br>class [ComponentAdapter](-component-adapter/index.md)(listener: [ComponentAdapter.ComponentAdapterListener](-component-adapter/-component-adapter-listener/index.md)) : [ListAdapter](https://developer.android.com/reference/kotlin/androidx/recyclerview/widget/ListAdapter.html)&lt;[Component](-component/index.md), [ComponentViewHolder](-component-view-holder/index.md)&gt; <br>An adapter to display all [Component](-component/index.md)s using their corresponding [ComponentViewHolder](-component-view-holder/index.md). |
| [ComponentFragment](-component-fragment/index.md) | [androidJvm]<br>class [ComponentFragment](-component-fragment/index.md) : [Fragment](https://developer.android.com/reference/kotlin/androidx/fragment/app/Fragment.html), [ComponentAdapter.ComponentAdapterListener](-component-adapter/-component-adapter-listener/index.md)<br>Fragment to hold a list of all [Component](-component/index.md)s. |
| [ComponentViewHolder](-component-view-holder/index.md) | [androidJvm]<br>sealed class [ComponentViewHolder](-component-view-holder/index.md) : [RecyclerView.ViewHolder](https://developer.android.com/reference/kotlin/androidx/recyclerview/widget/RecyclerView.ViewHolder.html)<br>Sealed class to define all [RecyclerView.ViewHolder](https://developer.android.com/reference/kotlin/androidx/recyclerview/widget/RecyclerView.ViewHolder.html)s used to display [Component](-component/index.md)s. |
