/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:31 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSTExpressionNode.h>

@class NSString;

@interface TSTLetNode : TSTExpressionNode {

	NSString* _whitespaceAfterLet;
	NSString* _whitespaceAfterIdentifier;
	NSString* _whitespaceAfterEquals;
	NSString* _whitespaceAfterDelimiter;

}

@property (nonatomic,retain) NSString * whitespaceAfterLet;                     //@synthesize whitespaceAfterLet=_whitespaceAfterLet - In the implementation block
@property (nonatomic,retain) NSString * whitespaceAfterIdentifier;              //@synthesize whitespaceAfterIdentifier=_whitespaceAfterIdentifier - In the implementation block
@property (nonatomic,retain) NSString * whitespaceAfterEquals;                  //@synthesize whitespaceAfterEquals=_whitespaceAfterEquals - In the implementation block
@property (nonatomic,retain) NSString * whitespaceAfterDelimiter;               //@synthesize whitespaceAfterDelimiter=_whitespaceAfterDelimiter - In the implementation block
+(id)letString;
+(id)defaultNameWithIndex:(unsigned)arg1 ;
+(id)newBareLetNodeWithContext:(id)arg1 ;
-(id)string;
-(int)tokenType;
-(void)setChildren:(id)arg1 ;
-(void)loadFromArchive:(const LetNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(LetNodeArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(BOOL)isEqualToExpressionNode:(id)arg1 ;
-(id)formulaPlainText;
-(TSCEFunctionArgSpec*)argumentSpec;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2 ;
-(id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3 ;
-(TSTCSENodeData)recordHashesForSubexpressions:(id)arg1 ;
-(id)copyByResolvingIdentifiers:(id)arg1 hostTable:(id)arg2 baseHostCell:(TSUCellCoord)arg3 forceReferenceInterpretation:(BOOL)arg4 symbolTable:(TSCESymbolTable*)arg5 oldToNewNodeMap:(id)arg6 ;
-(void)buildASTNodeArray:(TSCEASTNodeArray*)arg1 hostCell:(TSUCellCoord)arg2 symbolTable:(TSCESymbolTable*)arg3 ;
-(void)addVariablesMatchingPrefix:(id)arg1 forFormulaIndex:(unsigned long long)arg2 toDictionary:(id)arg3 symbolTable:(TSCESymbolTable*)arg4 ;
-(void)addAllIdentifiersToSymbolTable:(TSCESymbolTable*)arg1 ;
-(void)setWhitespaceAfterDelimiter:(NSString *)arg1 ;
-(id)initWithContext:(id)arg1 children:(id)arg2 ;
-(void)setWhitespaceAfterLet:(NSString *)arg1 ;
-(void)setWhitespaceAfterIdentifier:(NSString *)arg1 ;
-(void)setWhitespaceAfterEquals:(NSString *)arg1 ;
-(void)p_fixupNodeIfFunctionNode:(id)arg1 ;
-(NSString *)whitespaceAfterLet;
-(NSString *)whitespaceAfterIdentifier;
-(NSString *)whitespaceAfterEquals;
-(NSString *)whitespaceAfterDelimiter;
-(unsigned)boundSymbol;
@end
