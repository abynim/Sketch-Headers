#import "MSStyledLayer.h"

@class NSTextStorage;

@interface _MSTextLayer : MSStyledLayer
{
    BOOL _automaticallyDrawOnUnderlyingPath;
    BOOL _dontSynchroniseWithSymbol;
    BOOL _heightIsClipped;
    BOOL _usesNewLineSpacingBehaviour;
    NSTextStorage *_storage;
    long long _textBehaviour;
}

@property(nonatomic) BOOL usesNewLineSpacingBehaviour; // @synthesize usesNewLineSpacingBehaviour=_usesNewLineSpacingBehaviour;
@property(nonatomic) long long textBehaviour; // @synthesize textBehaviour=_textBehaviour;
@property(retain, nonatomic) NSTextStorage *storage; // @synthesize storage=_storage;
@property(nonatomic) BOOL heightIsClipped; // @synthesize heightIsClipped=_heightIsClipped;
@property(nonatomic) BOOL dontSynchroniseWithSymbol; // @synthesize dontSynchroniseWithSymbol=_dontSynchroniseWithSymbol;
@property(nonatomic) BOOL automaticallyDrawOnUnderlyingPath; // @synthesize automaticallyDrawOnUnderlyingPath=_automaticallyDrawOnUnderlyingPath;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveUsesNewLineSpacingBehaviour:(BOOL)arg1;
- (BOOL)primitiveUsesNewLineSpacingBehaviour;
- (void)setPrimitiveTextBehaviour:(long long)arg1;
- (long long)primitiveTextBehaviour;
- (void)setPrimitiveStorage:(id)arg1;
- (id)primitiveStorage;
- (void)setPrimitiveHeightIsClipped:(BOOL)arg1;
- (BOOL)primitiveHeightIsClipped;
- (void)setPrimitiveDontSynchroniseWithSymbol:(BOOL)arg1;
- (BOOL)primitiveDontSynchroniseWithSymbol;
- (void)setPrimitiveAutomaticallyDrawOnUnderlyingPath:(BOOL)arg1;
- (BOOL)primitiveAutomaticallyDrawOnUnderlyingPath;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

