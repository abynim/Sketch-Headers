#import "NSTextStorage.h"

@interface NSTextStorage (MSList)
- (id)paragraphStyle;
- (id)attributeForKey:(id)arg1;
- (id)stringByStrippingMarkers:(id)arg1 oldList:(id)arg2 index:(long long)arg3;
- (id)stringByStrippingNewlinesSpacesAndTabs:(id)arg1;
- (id)stripListMarkers:(id)arg1 oldList:(id)arg2 lineIndex:(long long)arg3;
- (id)strippedLinesFromTextStorage:(id)arg1 oldList:(id)arg2;
- (id)combineLines:(id)arg1 intoList:(id)arg2;
- (id)normalTabStops;
- (id)listTabStops;
- (void)updateListFrom:(id)arg1 toList:(id)arg2;
- (void)updateListStyle:(id)arg1;
- (id)currentListStyle;
@end

