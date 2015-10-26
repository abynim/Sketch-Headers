#import "NSObject.h"

@class BCFilterInfo, NSArray, NSObject<BCOutlineViewDataSource>, NSObject<BCOutlineViewDelegate>, NSPredicate;

@interface BCOutlineViewDataController : NSObject
{
    NSObject<BCOutlineViewDataSource> *_dataSource;
    NSObject<BCOutlineViewDelegate> *_delegate;
    BCFilterInfo *_filter;
    id _cachedNode;
    NSArray *_cachedNodesChildren;
}

@property(retain, nonatomic) NSArray *cachedNodesChildren; // @synthesize cachedNodesChildren=_cachedNodesChildren;
@property(retain, nonatomic) id cachedNode; // @synthesize cachedNode=_cachedNode;
@property(retain, nonatomic) BCFilterInfo *filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) NSObject<BCOutlineViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<BCOutlineViewDataSource> *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (BOOL)handleDragWithPasteboard:(id)arg1 forProposedItem:(id)arg2 proposedChildIndex:(long long)arg3 copying:(BOOL)arg4 validationOnly:(BOOL)arg5;
- (void)removeNodes:(id)arg1;
- (BOOL)writeNodes:(id)arg1 toPasteboard:(id)arg2;
- (BOOL)shouldExpandNode:(id)arg1;
- (id)childOfNode:(id)arg1 atIndex:(long long)arg2;
- (unsigned long long)numberOfChildrenOfNode:(id)arg1;
- (id)childrenOfNode:(id)arg1;
@property(readonly, nonatomic) NSPredicate *nodeFilterPredicate;
- (BOOL)nodeOrChildMatchesFilter:(id)arg1;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;
- (id)init;

@end

