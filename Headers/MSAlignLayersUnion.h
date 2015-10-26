#import "GKRect.h"

@interface MSAlignLayersUnion : GKRect
{
    id _layers;
}

+ (id)unionWithLayers:(id)arg1;
@property(retain, nonatomic) id layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (void)makeOriginIntegral;
- (id)frame;
- (void)recordRelativeRect;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)absoluteRect;
- (BOOL)isLocked;

@end

