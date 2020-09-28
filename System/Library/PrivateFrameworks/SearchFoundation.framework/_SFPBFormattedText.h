/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBFormattedText.h>
@class _SFPBText, _SFPBImage, NSData;


@protocol _SFPBFormattedText <NSObject>
@property (nonatomic,retain) _SFPBText * text; 
@property (nonatomic,retain) _SFPBImage * glyph; 
@property (assign,nonatomic) BOOL isEmphasized; 
@property (assign,nonatomic) BOOL isBold; 
@property (assign,nonatomic) int textColor; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setTextColor:(int)arg1;
-(_SFPBText *)text;
-(void)setIsEmphasized:(BOOL)arg1;
-(void)setText:(id)arg1;
-(_SFPBImage *)glyph;
-(BOOL)isEmphasized;
-(void)setGlyph:(id)arg1;
-(int)textColor;
-(BOOL)isBold;
-(id)initWithJSON:(id)arg1;
-(void)setIsBold:(BOOL)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBText, _SFPBImage, NSData, NSString;

@interface _SFPBFormattedText : PBCodable <_SFPBFormattedText, NSSecureCoding> {

	BOOL _isEmphasized;
	BOOL _isBold;
	int _textColor;
	_SFPBText* _text;
	_SFPBImage* _glyph;

}

@property (nonatomic,retain) _SFPBText * text;                      //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) _SFPBImage * glyph;                    //@synthesize glyph=_glyph - In the implementation block
@property (assign,nonatomic) BOOL isEmphasized;                     //@synthesize isEmphasized=_isEmphasized - In the implementation block
@property (assign,nonatomic) BOOL isBold;                           //@synthesize isBold=_isBold - In the implementation block
@property (assign,nonatomic) int textColor;                         //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFacade:(id)arg1 ;
-(void)setTextColor:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(_SFPBText *)text;
-(void)setIsEmphasized:(BOOL)arg1 ;
-(void)setText:(_SFPBText *)arg1 ;
-(_SFPBImage *)glyph;
-(BOOL)isEmphasized;
-(void)setGlyph:(_SFPBImage *)arg1 ;
-(int)textColor;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isBold;
-(id)initWithJSON:(id)arg1 ;
-(void)setIsBold:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)jsonData;
-(id)dictionaryRepresentation;
@end
