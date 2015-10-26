#import "NSObject.h"

@class MSPluginBundle, NSAttributedString, NSString;

@interface MSPreferencesPluginInfo : NSObject
{
    BOOL _enabled;
    NSString *_name;
    MSPluginBundle *_pluginBundle;
}

+ (id)pluginInfoWithName:(id)arg1;
+ (id)pluginInfoWithPluginBundle:(id)arg1;
@property(retain, nonatomic) MSPluginBundle *pluginBundle; // @synthesize pluginBundle=_pluginBundle;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) BOOL enabled;
@property(readonly, copy, nonatomic) NSString *pluginDescription;
@property(readonly, copy, nonatomic) NSString *version;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, copy, nonatomic) NSString *enableCheckboxTitle;
@property(readonly, copy, nonatomic) NSAttributedString *attributedTitle;
- (void)dealloc;

@end

