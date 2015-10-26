#import "SVGElement.h"

@class NSSet, NSString;

@interface _SVGFont : SVGElement
{
    NSSet *_usedBy;
    NSString *_family;
    double _size;
    NSString *_style;
    NSString *_variant;
    double _weight;
}

+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(retain, nonatomic) NSString *variant; // @synthesize variant=_variant;
@property(retain, nonatomic) NSString *style; // @synthesize style=_style;
@property(nonatomic) double size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *family; // @synthesize family=_family;
@property(retain, nonatomic) NSSet *usedBy; // @synthesize usedBy=_usedBy;
- (void).cxx_destruct;
- (void)primitiveRemoveUsedByObject:(id)arg1;
- (void)primitiveAddUsedByObject:(id)arg1;
- (void)removeUsedByObject:(id)arg1;
- (void)addUsedByObject:(id)arg1;

@end

