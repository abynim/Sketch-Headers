#import "NSObject.h"

@class MSSharedObjectContainer, NSArray;

@protocol MSSharedObjectContainerDelegate <NSObject>
- (NSArray *)rootLayersForShareadObjectContainer:(MSSharedObjectContainer *)arg1 includingSymbols:(BOOL)arg2;
@end

