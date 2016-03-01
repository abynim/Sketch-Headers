//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (CHStringExtensions)
+ (id)stringWithPrefix:(id)arg1 number:(long long)arg2;
+ (id)stringRepresentationForSeconds:(unsigned long long)arg1;
- (id)uniqueStringComparedToStrings:(id)arg1 includeCopySuffix:(BOOL)arg2;
- (id)splitByBaseAndNumber;
- (BOOL)containsSubstring:(id)arg1;
- (id)trimmedString;
- (id)stringWithFirstCharacterLowercase;
- (BOOL)endsWith:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)endsWith:(id)arg1;
- (BOOL)startsWith:(id)arg1;
- (id)stringByAppendingPathComponents:(id)arg1;
- (id)stringByDeletingSuffix:(id)arg1;
- (id)stringByDeletingPrefix:(id)arg1;
@end

