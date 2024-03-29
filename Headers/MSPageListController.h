//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/MSSidebarListController.h>

#import <SketchControllers/BCOutlineViewDataControllerDataSource-Protocol.h>
#import <SketchControllers/BCOutlineViewDataControllerDelegate-Protocol.h>

@class NSArray, NSString, NSView;

@interface MSPageListController : MSSidebarListController <BCOutlineViewDataControllerDataSource, BCOutlineViewDataControllerDelegate>
{
    NSArray *_selectedPages;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *selectedPages; // @synthesize selectedPages=_selectedPages;
- (Class)pasteboardWriterClass;
- (id)dataController:(id)arg1 menuItemsForSelectedObjects:(id)arg2;
- (void)duplicatePages:(id)arg1;
- (void)removePageWithValidation:(id)arg1;
- (void)dataController:(id)arg1 handleBadgePressedOnNode:(id)arg2 withAltState:(BOOL)arg3;
- (BOOL)dataController:(id)arg1 copyFromPasteboard:(id)arg2 toParent:(id)arg3 after:(id)arg4;
- (BOOL)dataController:(id)arg1 moveFromPasteboard:(id)arg2 toParent:(id)arg3 after:(id)arg4;
- (BOOL)moveNode:(id)arg1 toParent:(id)arg2 after:(id)arg3;
- (void)addPage:(id)arg1 after:(id)arg2;
- (BOOL)canMoveNode:(id)arg1 toParent:(id)arg2 after:(id)arg3;
- (BOOL)canCopyNode:(id)arg1 toParent:(id)arg2 after:(id)arg3;
- (void)dataController:(id)arg1 removeNodes:(id)arg2;
- (void)dataController:(id)arg1 updateNode:(id)arg2 expandedState:(unsigned long long)arg3;
- (BOOL)dataController:(id)arg1 isNodeHighlighted:(id)arg2;
- (BOOL)dataController:(id)arg1 isPreviewDependentOnExpansionState:(id)arg2;
- (BOOL)dataController:(id)arg1 isNodeExpandable:(id)arg2;
- (BOOL)dataController:(id)arg1 isNodeExpanded:(id)arg2;
- (void)dataController:(id)arg1 changeSelectionTo:(id)arg2;
- (BOOL)dataController:(id)arg1 nodeHasSharedStyle:(id)arg2;
- (id)selectedNodesForDataController:(id)arg1;
- (BOOL)dataController:(id)arg1 isNodeLockedOnCanvas:(id)arg2;
- (BOOL)dataController:(id)arg1 isAncestorOfNodeHiddenOnCanvas:(id)arg2;
- (BOOL)dataController:(id)arg1 canNodeBeHidden:(id)arg2;
- (BOOL)dataController:(id)arg1 isNodeHiddenOnCanvas:(id)arg2;
- (BOOL)dataController:(id)arg1 isNodeSelected:(id)arg2;
- (id)pageForNode:(id)arg1;
- (id)dataController:(id)arg1 childrenOfNode:(id)arg2;
@property(readonly, nonatomic) NSView *defaultFirstResponder;
- (id)rootObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

