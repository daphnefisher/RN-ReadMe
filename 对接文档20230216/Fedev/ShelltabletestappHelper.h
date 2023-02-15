#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <React/RCTBridgeDelegate.h>
#import <UserNotifications/UNUserNotificationCenter.h>


@interface ShelltabletestappHelper : UIResponder<RCTBridgeDelegate, UNUserNotificationCenterDelegate>

+ (instancetype)tableTestA_shared;
- (BOOL)standardCar_tryThisWay:(void (^)(void))changeVcBlock;
- (UIInterfaceOrientationMask)tableTestA_getOrientation;
- (UIViewController *)tableTestA_changeRootController:(UIApplication *)application withOptions:(NSDictionary *)launchOptions;

@end
