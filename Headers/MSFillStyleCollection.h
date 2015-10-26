#import "MSStylePartCollection.h"

@interface MSFillStyleCollection : MSStylePartCollection
{
}

+ (Class)immutableClass;
- (id)gradientFillForInserting;
- (id)colorFillForInserting;
- (id)stylePartForInserting;

@end

