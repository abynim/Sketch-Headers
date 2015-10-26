#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface MSActionsController : NSObject
{
    NSString *_actionNameForActiveToolbarItem;
    NSMutableDictionary *_actions;
}

@property(retain, nonatomic) NSMutableDictionary *actions; // @synthesize actions=_actions;
@property(copy, nonatomic) NSString *actionNameForActiveToolbarItem; // @synthesize actionNameForActiveToolbarItem=_actionNameForActiveToolbarItem;
- (void).cxx_destruct;
- (void)dealloc;
- (id)actionWithName:(id)arg1;
- (id)allActions;
- (void)createActionsForDocument:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)init;
- (id)actionClasses;

@end

