#import "MSMenuBuilder.h"

@interface MSLayerPickerMenuBuilder : MSMenuBuilder
{
}

- (BOOL)shouldShowSubLayersForGroupInLayerPickerMenu:(id)arg1;
- (void)addLayerItem:(id)arg1 toMenu:(id)arg2 withInset:(id)arg3;
- (void)addChildrenOfGroup:(id)arg1 underPoint:(struct CGPoint)arg2 toMenu:(id)arg3 withInset:(id)arg4;
- (void)updatePickerMenuItem:(id)arg1 forPage:(id)arg2 atPoint:(struct CGPoint)arg3;

@end

