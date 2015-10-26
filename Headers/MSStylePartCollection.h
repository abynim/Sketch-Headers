#import "MSArray.h"

@interface MSStylePartCollection : MSArray
{
}

- (id)stylePartForInserting;
- (id)addNewStylePart;
- (void)moveStylePartFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeStylePartAtIndex:(unsigned long long)arg1;
- (void)removeStylePart:(id)arg1;
- (id)parentStyle;

@end

