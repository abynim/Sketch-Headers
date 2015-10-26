#import "NSObject.h"

@class MSDocumentData, NSArray;

@interface MSSidebarListController : NSObject
{
    id <MSSidebarControllerDelegate> _delegate;
    id _rootObject;
}

@property(readonly, nonatomic) id rootObject; // @synthesize rootObject=_rootObject;
@property(nonatomic) __weak id <MSSidebarControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)exportNodes:(id)arg1;
- (BOOL)copyNodes:(id)arg1 toParent:(id)arg2 after:(id)arg3;
- (BOOL)copyNode:(id)arg1 toParent:(id)arg2 after:(id)arg3;
- (BOOL)moveNodes:(id)arg1 toParent:(id)arg2 after:(id)arg3;
- (BOOL)moveNode:(id)arg1 toParent:(id)arg2 after:(id)arg3;
- (BOOL)canCopyNodes:(id)arg1 toParent:(id)arg2 after:(id)arg3;
- (BOOL)canCopyNode:(id)arg1 toParent:(id)arg2 after:(id)arg3;
- (BOOL)canMoveNodes:(id)arg1 toParent:(id)arg2 after:(id)arg3;
- (BOOL)canMoveNode:(id)arg1 toParent:(id)arg2 after:(id)arg3;
@property(readonly, nonatomic) NSArray *dragTypes;
- (id)readNodesFromPasteboard:(id)arg1;
- (BOOL)writeNodes:(id)arg1 toPasteboard:(id)arg2;
- (id)layerForNode:(id)arg1;
@property(readonly, nonatomic) __weak MSDocumentData *documentData;
- (id)initWithDelegate:(id)arg1;

@end

