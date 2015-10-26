#import "NSObject.h"

@class MSArray;

@protocol MSArrayDelegate <NSObject>
- (void)dataArray:(MSArray *)arg1 didRemoveObject:(id)arg2;
- (void)dataArray:(MSArray *)arg1 willRemoveObject:(id)arg2;
- (void)dataArray:(MSArray *)arg1 didAddObject:(id)arg2;
@end

