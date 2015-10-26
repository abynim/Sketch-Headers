#import "_MSSharedLayerStyle.h"

@class MSStyle;

@interface MSSharedLayerStyle : _MSSharedLayerStyle
{
}

- (unsigned long long)type;
- (id)newInstance;
@property(readonly, nonatomic) MSStyle *style;
- (id)defaultName;

@end

