#import "NSObject.h"

@class MSLayer;

@interface MSLayerListTuple : NSObject
{
    MSLayer *_layer;
    long long _level;
}

+ (id)tupleWithLayer:(id)arg1 level:(long long)arg2;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(retain, nonatomic) MSLayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;

@end

