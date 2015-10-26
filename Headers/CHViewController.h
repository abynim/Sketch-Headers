#import "NSViewController.h"

@class NSArray;

@interface CHViewController : NSViewController
{
    NSViewController *_parentViewControllerCH;
    NSArray *_childViewControllersCH;
}

+ (void)initialize;
@property(nonatomic) __weak NSViewController *parentViewController; // @synthesize parentViewController=_parentViewControllerCH;
- (void).cxx_destruct;
- (void)setTargetsToNil:(id)arg1;
- (void)dealloc;
- (id)firstResponderAlternativeForLosingFocus;
- (void)viewWillDisappear;
- (id)rootViewController;
@property(copy, nonatomic) NSArray *childViewControllers; // @synthesize childViewControllers=_childViewControllersCH;
- (void)removeChildViewController:(id)arg1;
- (void)removeChildViewControllerAtIndex:(long long)arg1;
- (void)removeFromParentViewController;
- (void)addChildViewController:(id)arg1;
- (id)nibName;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

