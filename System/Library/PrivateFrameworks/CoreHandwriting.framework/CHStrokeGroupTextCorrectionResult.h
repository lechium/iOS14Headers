/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, CHTextCorrectionResult;

@interface CHStrokeGroupTextCorrectionResult : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _inputStrokeIdentifiers;
	CHTextCorrectionResult* _textCorrectionResult;

}

@property (nonatomic,copy,readonly) NSArray * inputStrokeIdentifiers;                           //@synthesize inputStrokeIdentifiers=_inputStrokeIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) CHTextCorrectionResult * textCorrectionResult;              //@synthesize textCorrectionResult=_textCorrectionResult - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSArray *)inputStrokeIdentifiers;
-(CHTextCorrectionResult *)textCorrectionResult;
-(id)initWithTextCorrectionResult:(id)arg1 inputStrokeIdentifiers:(id)arg2 ;
-(BOOL)isEqualToStrokeGroupTextCorrectionResult:(id)arg1 ;
@end

