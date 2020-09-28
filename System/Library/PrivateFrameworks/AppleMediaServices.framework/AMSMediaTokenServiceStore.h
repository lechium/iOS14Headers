/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, AMSMediaToken, AMSMediaTokenServiceKeychainStore, AMSMediaTokenServiceUserDefaultsStore;

@interface AMSMediaTokenServiceStore : NSObject {

	NSString* _clientIdentifier;
	NSString* _keychainAccessGroup;
	AMSMediaToken* _memoryMediaToken;
	AMSMediaTokenServiceKeychainStore* _keychainStore;
	AMSMediaTokenServiceUserDefaultsStore* _userDefaultsStore;

}

@property (nonatomic,retain) AMSMediaToken * memoryMediaToken;                                       //@synthesize memoryMediaToken=_memoryMediaToken - In the implementation block
@property (nonatomic,retain) AMSMediaTokenServiceKeychainStore * keychainStore;                      //@synthesize keychainStore=_keychainStore - In the implementation block
@property (nonatomic,retain) AMSMediaTokenServiceUserDefaultsStore * userDefaultsStore;              //@synthesize userDefaultsStore=_userDefaultsStore - In the implementation block
@property (nonatomic,readonly) NSString * clientIdentifier;                                          //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSString * keychainAccessGroup;                                         //@synthesize keychainAccessGroup=_keychainAccessGroup - In the implementation block
-(NSString *)keychainAccessGroup;
-(id)_keychainAccessGroup;
-(void)storeToken:(id)arg1 ;
-(void)setKeychainAccessGroup:(NSString *)arg1 ;
-(void)dealloc;
-(void)_teardownKeychainNotifications;
-(NSString *)clientIdentifier;
-(AMSMediaTokenServiceKeychainStore *)keychainStore;
-(BOOL)_hasAppleGroupEnabled;
-(id)initWithClientIdentifier:(id)arg1 keychainAccessGroup:(id)arg2 ;
-(void)setKeychainStore:(AMSMediaTokenServiceKeychainStore *)arg1 ;
-(AMSMediaToken *)memoryMediaToken;
-(void)setUserDefaultsStore:(AMSMediaTokenServiceUserDefaultsStore *)arg1 ;
-(void)_mediaTokenChanged;
-(void)_postMediaTokenChangedNotification;
-(void)setMemoryMediaToken:(AMSMediaToken *)arg1 ;
-(id)_mediaTokenChangedNotificationName;
-(id)retrieveToken;
-(AMSMediaTokenServiceUserDefaultsStore *)userDefaultsStore;
-(void)_setupKeychainNotifications;
@end
