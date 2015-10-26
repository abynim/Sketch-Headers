#import "MSSidebarListController.h"

#import "BCOutlineViewDataSource.h"
#import "BCOutlineViewDelegate.h"

@class NSArray, NSString;

@interface MSLayerListController : MSSidebarListController <BCOutlineViewDataSource, BCOutlineViewDelegate>
{
}

- (void)hoverNodeDidChangeTo:(id)arg1;
- (id)menuItemsForSelectedObjects:(id)arg1;
- (void)handleBadgePressedOnNode:(id)arg1 withAltState:(BOOL)arg2;
- (void)removeNodes:(id)arg1;
- (void)updateNode:(id)arg1 expandedState:(unsigned long long)arg2;
- (long long)mapExpandedStateToLayerListStatus:(unsigned long long)arg1;
- (BOOL)isNodeExpandable:(id)arg1;
- (BOOL)isNodeExpanded:(id)arg1;
- (void)changeSelectionTo:(id)arg1;
- (BOOL)isNodeSelected:(id)arg1;
- (id)layerForNode:(id)arg1;
- (id)childrenOfNode:(id)arg1;
- (id)rootObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *dragTypes;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

