#import "MSImmutableModelBase.h"

@class NSString;

@interface _MSImmutableExportSize : MSImmutableModelBase
{
    NSString *_format;
    NSString *_name;
    double _scale;
    long long _visibleScaleType;
}

@property(nonatomic) long long visibleScaleType; // @synthesize visibleScaleType=_visibleScaleType;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

