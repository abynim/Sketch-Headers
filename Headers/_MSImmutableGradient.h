#import "MSImmutableModelBase.h"

@class MSImmutableArray, MSPointArray;

@interface _MSImmutableGradient : MSImmutableModelBase
{
    double _elipseLength;
    struct CGPoint _from;
    long long _gradientType;
    MSPointArray *_points;
    BOOL _shouldSmoothenOpacity;
    MSImmutableArray *_stops;
    struct CGPoint _to;
}

@property(nonatomic) struct CGPoint to; // @synthesize to=_to;
@property(retain, nonatomic) MSImmutableArray *stops; // @synthesize stops=_stops;
@property(nonatomic) BOOL shouldSmoothenOpacity; // @synthesize shouldSmoothenOpacity=_shouldSmoothenOpacity;
@property(retain, nonatomic) MSPointArray *points; // @synthesize points=_points;
@property(nonatomic) long long gradientType; // @synthesize gradientType=_gradientType;
@property(nonatomic) struct CGPoint from; // @synthesize from=_from;
@property(nonatomic) double elipseLength; // @synthesize elipseLength=_elipseLength;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

