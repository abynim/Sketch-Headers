//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchModel/MSCoding-Protocol.h>
#import <SketchModel/NSCopying-Protocol.h>

@class NSAttributedString, NSSet, NSString;

@interface MSAttributedString : NSObject <MSCoding, NSCopying>
{
    NSSet *_fontNames;
    // Error parsing type: A^v, name: _fontNamesAtomicPointer
    NSSet *_fontDescriptors;
    // Error parsing type: A^v, name: _fontDescriptorsAtomicPointer
    NSAttributedString *_attributedString;
    // Error parsing type: A^v, name: _attributedStringAtomicPointer
    NSAttributedString *_transformedAttributedString;
    // Error parsing type: A^v, name: _transformedAttributedStringAtomicPointer
    NSSet *_unavailableFontNames;
    // Error parsing type: A^v, name: _unavailableFontNamesAtomicPointer
    NSAttributedString *_encodedAttributedString;
}

+ (id)replacementFontDescriptorWithFaceName:(id)arg1 size:(double)arg2;
+ (BOOL)isFontAvailable:(id)arg1;
+ (BOOL)isRequiredFontAvailableInDictionary:(id)arg1;
+ (id)fontNameInDictionary:(id)arg1;
+ (id)fontDescriptorInDictionary:(id)arg1;
+ (id)attributedStringWithRefreshedFontDescriptors:(id)arg1;
+ (id)decodeAttributedString:(id)arg1;
+ (id)encodeAttributedString:(id)arg1;
+ (id)refreshFontDescriptorsInDictionary:(id)arg1;
+ (id)decodeAttributesInDictionary:(id)arg1;
+ (id)encodeAttributesInDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSAttributedString *encodedAttributedString; // @synthesize encodedAttributedString=_encodedAttributedString;
- (void).cxx_destruct;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (id)debugDescription;
- (id)immutableModelObject;
- (id)attributedStringByReplacingFontNames:(id)arg1;
@property(readonly, nonatomic) BOOL areRequiredFontsAvailable;
@property(readonly, nonatomic) NSSet *unavailableFontNames;
- (id)calculateUnavailableFontNames;
@property(readonly, copy, nonatomic) NSSet *fontNames;
@property(readonly, copy, nonatomic) NSSet *fontDescriptors;
@property(readonly, nonatomic) NSAttributedString *transformedAttributedString;
- (id)calculateTransformedAttributedStringFromAtrributedString:(id)arg1;
@property(readonly, nonatomic) NSAttributedString *attributedString;
- (id)calculateAttributedString;
@property(readonly, nonatomic) NSString *string;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeAsJSON:(id)arg1;
- (void)encodeWithArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithUnarchiver:(id)arg1;
- (id)initWithAttributedString:(id)arg1 documentColorSpace:(id)arg2;
- (id)initWithAttributedString:(id)arg1 colorSpace:(id)arg2 convert:(BOOL)arg3;
- (id)initWithEncodedAttributedString:(id)arg1;
- (id)init;
- (id)treeAsDictionary;

// Remaining properties
@property(readonly, nonatomic) NSString *archiveReferenceIdentifier_bc;

@end

