/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface CardDAVDelegateInfo : NSObject {

	NSString* _principalPath;
	NSNumber* _dsid;
	NSString* _altDSID;
	NSString* _appleID;

}

@property (nonatomic,retain) NSString * principalPath;              //@synthesize principalPath=_principalPath - In the implementation block
@property (nonatomic,retain) NSNumber * dsid;                       //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,retain) NSString * altDSID;                    //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,retain) NSString * appleID;                    //@synthesize appleID=_appleID - In the implementation block
+(id)hardCodedPrincipalPathForDSID:(id)arg1 ;
+(id)altDSIDForAccount:(id)arg1 ;
+(id)appleIDForAccount:(id)arg1 ;
+(id)dsidForAccount:(id)arg1 ;
-(NSNumber *)dsid;
-(void)setAppleID:(NSString *)arg1 ;
-(void)setDsid:(NSNumber *)arg1 ;
-(NSString *)altDSID;
-(NSString *)appleID;
-(void)setAltDSID:(NSString *)arg1 ;
-(id)_hardCodedPrincipalPathForFamilyMember:(id)arg1 ;
-(NSString *)principalPath;
-(void)setPrincipalPath:(NSString *)arg1 ;
-(id)initWithFamilyMember:(id)arg1 ;
-(void)setPropertiesOnAccount:(id)arg1 ;
@end

