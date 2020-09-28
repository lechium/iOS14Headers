/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TCFontName : NSObject {

	NSString* _styleName;
	NSString* _fullName;

}

@property (nonatomic,readonly) NSString * styleName;              //@synthesize styleName=_styleName - In the implementation block
@property (nonatomic,readonly) NSString * fullName;               //@synthesize fullName=_fullName - In the implementation block
-(NSString *)styleName;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)fullName;
-(id)description;
-(id)initWithStyleName:(id)arg1 fullName:(id)arg2 ;
-(id)equivalentDictionary;
@end
