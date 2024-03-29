//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

#import <SketchModel/MSCoding-Protocol.h>

@class NSString;

@interface NSAttributedString (MSBaseArchiver) <MSCoding>
- (id)initWithUnarchiver:(id)arg1;
- (void)encodeWithArchiver:(id)arg1;
- (id)attributeForKey:(id)arg1;
- (id)currentListStyle;
- (id)treeAsDictionary;
- (id)initWithString:(id)arg1 attributedStringAttributes:(id)arg2;
- (id)attributedStringByApplyingBlock:(CDUnknownBlockType)arg1;
- (id)attributedStringAttributes;
- (id)translatedToColorSpace:(struct CGColorSpace *)arg1;
- (id)convertedToColorSpace:(struct CGColorSpace *)arg1;
- (id)attributedStringWithDocumentColorSpace:(struct CGColorSpace *)arg1 convert:(BOOL)arg2;
- (id)standardAttributedStringWithDocumentColorSpace:(struct CGColorSpace *)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *archiveReferenceIdentifier_bc;
@end

