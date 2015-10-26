#import "NSObject.h"

@class MSDocumentData, MSPage;

@protocol MSDocumentDataDelegate <NSObject>
- (void)layerTreeLayoutDidChange;
- (void)didAddPage:(MSPage *)arg1;
- (void)willRemovePage:(MSPage *)arg1;
- (void)documentData:(MSDocumentData *)arg1 syncSharedObject:(id <MSSharedObjectInstance>)arg2;
- (void)documentData:(MSDocumentData *)arg1 didChangeToPage:(MSPage *)arg2;
@end

