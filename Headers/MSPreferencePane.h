#import "NSViewController.h"

@class MSPreferencesController;

@interface MSPreferencePane : NSViewController
{
    MSPreferencesController *_preferencesController;
}

+ (id)nibName;
+ (id)toolbarIcon;
+ (id)title;
+ (id)identifier;
@property(readonly, nonatomic) __weak MSPreferencesController *preferencesController; // @synthesize preferencesController=_preferencesController;
- (void).cxx_destruct;
- (id)initWithPreferencesController:(id)arg1;

@end

