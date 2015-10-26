#import "NSObject.h"

@class NSArray, NSString;

@protocol MSStylePartInspectorDelegate <NSObject>

@optional
- (void)reload;
- (NSArray *)layers;
- (void)refreshLayers;
- (void)returnToDefaultHandler;
- (id)switchToEventHandlerWithName:(NSString *)arg1;
@end

