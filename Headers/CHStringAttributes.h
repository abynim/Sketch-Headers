#import "NSDictionary.h"

#import "NSCopying.h"

@class NSColor, NSFont, NSMutableDictionary, NSShadow;

@interface CHStringAttributes : NSDictionary <NSCopying>
{
    NSMutableDictionary *attributes;
}

+ (id)stringAttributesWithFont:(id)arg1 color:(id)arg2 alignment:(unsigned long long)arg3;
+ (id)stringAttributesWithFont:(id)arg1 color:(id)arg2;
+ (id)stringAttributesWithColor:(id)arg1;
+ (id)stringAttributesWithFont:(id)arg1;
+ (id)stringAttributes;
+ (id)stringAttributesWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (void)setBigShadowOfColor:(id)arg1 location:(long long)arg2;
- (void)setShadowOfColor:(id)arg1 location:(long long)arg2;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSShadow *shadow;
- (void)disableHyphenation;
@property(nonatomic) unsigned long long alignment;
@property(retain, nonatomic) NSColor *color;
@property(nonatomic) double fontSize;
@property(retain, nonatomic) NSFont *font;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;

@end
