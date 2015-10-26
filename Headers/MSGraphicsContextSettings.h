#import "_MSGraphicsContextSettings.h"

@interface MSGraphicsContextSettings : _MSGraphicsContextSettings
{
}

- (id)description;
- (void)setBlendMode:(long long)arg1;
- (int)CGBlendMode;
- (BOOL)shouldChangeGraphicsContext;

@end

