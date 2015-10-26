#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface MSPluginCommandSpecifier : NSObject <NSCopying>
{
    NSString *_pluginBundleIdentifier;
    NSString *_commandIdentifier;
}

@property(readonly, copy, nonatomic) NSString *commandIdentifier; // @synthesize commandIdentifier=_commandIdentifier;
@property(readonly, copy, nonatomic) NSString *pluginBundleIdentifier; // @synthesize pluginBundleIdentifier=_pluginBundleIdentifier;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCommandSpecifier:(id)arg1;
- (unsigned long long)hash;
- (id)stringValue;
- (id)initWithPluginBundleIdentifier:(id)arg1 commandIdentifier:(id)arg2;

@end

