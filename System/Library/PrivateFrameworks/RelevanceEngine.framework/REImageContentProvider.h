/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:06 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class REImage;

@interface REImageContentProvider : NSObject <NSCopying, NSSecureCoding> {

	REImage* _onePieceImage;
	REImage* _twoPieceForegroundImage;
	REImage* _twoPieceBackgroundImage;

}

@property (nonatomic,readonly) REImage * onePieceImage;                        //@synthesize onePieceImage=_onePieceImage - In the implementation block
@property (nonatomic,readonly) REImage * twoPieceForegroundImage;              //@synthesize twoPieceForegroundImage=_twoPieceForegroundImage - In the implementation block
@property (nonatomic,readonly) REImage * twoPieceBackgroundImage;              //@synthesize twoPieceBackgroundImage=_twoPieceBackgroundImage - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)imageContentProviderWithOnePieceImage:(id)arg1 ;
+(id)imageContentProviderWithOnePieceImage:(id)arg1 twoPieceForegroundImage:(id)arg2 twoPieceBackgroundImage:(id)arg3 ;
+(id)imageContentProviderFromClockKitImageProvider:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(REImage *)onePieceImage;
-(id)clockKitImageProviderRepresentation;
-(id)initWithImage:(id)arg1 foregroundImage:(id)arg2 backgroundImage:(id)arg3 ;
-(REImage *)twoPieceForegroundImage;
-(REImage *)twoPieceBackgroundImage;
@end

