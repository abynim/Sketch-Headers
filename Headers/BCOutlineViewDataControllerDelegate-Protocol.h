//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/NSObject-Protocol.h>

@class BCOutlineViewDataController, NSArray, NSPasteboard, NSURL, NSView;

@protocol BCOutlineViewDataControllerDelegate <NSObject>
@property(readonly, nonatomic) NSView *defaultFirstResponder;
- (void)dataController:(BCOutlineViewDataController *)arg1 handleBadgePressedOnNode:(id)arg2 withAltState:(BOOL)arg3;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 copyFromPasteboard:(NSPasteboard *)arg2 toParent:(id)arg3 after:(id)arg4;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 moveFromPasteboard:(NSPasteboard *)arg2 toParent:(id)arg3 after:(id)arg4;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 canCopyFromPasteboard:(NSPasteboard *)arg2 toParent:(id)arg3 after:(id)arg4;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 canMoveFromPasteboard:(NSPasteboard *)arg2 toParent:(id)arg3 after:(id)arg4;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 writeNodes:(NSArray *)arg2 toPasteboard:(NSPasteboard *)arg3;
- (NSArray *)dragTypesForDataController:(BCOutlineViewDataController *)arg1;
- (NSArray *)dataController:(BCOutlineViewDataController *)arg1 exportNodes:(NSArray *)arg2 toFolder:(NSURL *)arg3;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 isPreviewDependentOnExpansionState:(id)arg2;
- (void)dataController:(BCOutlineViewDataController *)arg1 updateNode:(id)arg2 expandedState:(unsigned long long)arg3;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 isNodeHighlighted:(id)arg2;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 isNodeExpandable:(id)arg2;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 isNodeExpanded:(id)arg2;
- (void)dataController:(BCOutlineViewDataController *)arg1 changeSelectionTo:(NSArray *)arg2;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 nodeHasSharedStyle:(id)arg2;
- (NSArray *)selectedNodesForDataController:(BCOutlineViewDataController *)arg1;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 isNodeLockedOnCanvas:(id)arg2;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 isAncestorOfNodeHiddenOnCanvas:(id)arg2;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 canNodeBeHidden:(id)arg2;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 isNodeHiddenOnCanvas:(id)arg2;
- (BOOL)dataController:(BCOutlineViewDataController *)arg1 isNodeSelected:(id)arg2;

@optional
- (void)dataController:(BCOutlineViewDataController *)arg1 hoverNodeDidChangeTo:(id)arg2;
- (NSArray *)dataController:(BCOutlineViewDataController *)arg1 menuItemsForSelectedObjects:(NSArray *)arg2;
@end

