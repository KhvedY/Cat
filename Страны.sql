USE [master]
GO
/****** Object:  Database [Countries]    Script Date: 26.04.2016 16:05:40 ******/
CREATE DATABASE [Countries]
 CONTAINMENT = NONE
 ON  PRIMARY 
( NAME = N'Countries', FILENAME = N'E:\Program Files (x86)\Microsoft SQL Server\MSSQL12.SQLEXPRESS\MSSQL\DATA\Countries.mdf' , SIZE = 5120KB , MAXSIZE = UNLIMITED, FILEGROWTH = 1024KB )
 LOG ON 
( NAME = N'Countries_log', FILENAME = N'E:\Program Files (x86)\Microsoft SQL Server\MSSQL12.SQLEXPRESS\MSSQL\DATA\Countries_log.ldf' , SIZE = 1024KB , MAXSIZE = 2048GB , FILEGROWTH = 10%)
GO
ALTER DATABASE [Countries] SET COMPATIBILITY_LEVEL = 120
GO
IF (1 = FULLTEXTSERVICEPROPERTY('IsFullTextInstalled'))
begin
EXEC [Countries].[dbo].[sp_fulltext_database] @action = 'enable'
end
GO
ALTER DATABASE [Countries] SET ANSI_NULL_DEFAULT OFF 
GO
ALTER DATABASE [Countries] SET ANSI_NULLS OFF 
GO
ALTER DATABASE [Countries] SET ANSI_PADDING OFF 
GO
ALTER DATABASE [Countries] SET ANSI_WARNINGS OFF 
GO
ALTER DATABASE [Countries] SET ARITHABORT OFF 
GO
ALTER DATABASE [Countries] SET AUTO_CLOSE OFF 
GO
ALTER DATABASE [Countries] SET AUTO_SHRINK OFF 
GO
ALTER DATABASE [Countries] SET AUTO_UPDATE_STATISTICS ON 
GO
ALTER DATABASE [Countries] SET CURSOR_CLOSE_ON_COMMIT OFF 
GO
ALTER DATABASE [Countries] SET CURSOR_DEFAULT  GLOBAL 
GO
ALTER DATABASE [Countries] SET CONCAT_NULL_YIELDS_NULL OFF 
GO
ALTER DATABASE [Countries] SET NUMERIC_ROUNDABORT OFF 
GO
ALTER DATABASE [Countries] SET QUOTED_IDENTIFIER OFF 
GO
ALTER DATABASE [Countries] SET RECURSIVE_TRIGGERS OFF 
GO
ALTER DATABASE [Countries] SET  DISABLE_BROKER 
GO
ALTER DATABASE [Countries] SET AUTO_UPDATE_STATISTICS_ASYNC OFF 
GO
ALTER DATABASE [Countries] SET DATE_CORRELATION_OPTIMIZATION OFF 
GO
ALTER DATABASE [Countries] SET TRUSTWORTHY OFF 
GO
ALTER DATABASE [Countries] SET ALLOW_SNAPSHOT_ISOLATION OFF 
GO
ALTER DATABASE [Countries] SET PARAMETERIZATION SIMPLE 
GO
ALTER DATABASE [Countries] SET READ_COMMITTED_SNAPSHOT OFF 
GO
ALTER DATABASE [Countries] SET HONOR_BROKER_PRIORITY OFF 
GO
ALTER DATABASE [Countries] SET RECOVERY SIMPLE 
GO
ALTER DATABASE [Countries] SET  MULTI_USER 
GO
ALTER DATABASE [Countries] SET PAGE_VERIFY CHECKSUM  
GO
ALTER DATABASE [Countries] SET DB_CHAINING OFF 
GO
ALTER DATABASE [Countries] SET FILESTREAM( NON_TRANSACTED_ACCESS = OFF ) 
GO
ALTER DATABASE [Countries] SET TARGET_RECOVERY_TIME = 0 SECONDS 
GO
ALTER DATABASE [Countries] SET DELAYED_DURABILITY = DISABLED 
GO
USE [Countries]
GO
/****** Object:  Table [dbo].[Все страны мира]    Script Date: 26.04.2016 16:05:41 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
SET ANSI_PADDING ON
GO
CREATE TABLE [dbo].[Все страны мира](
	[Абхазия] [varchar](50) NULL
) ON [PRIMARY]

GO
SET ANSI_PADDING OFF
GO
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Австралия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Австрия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Азавад')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Азад Джамму и Кашмир')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Азербайджан')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Азорские острова')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Аландские острова')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Албания')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Алжир')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Американское Самоа')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Ангилья')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Ангола')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Андорра')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Антигуа и Барбуда')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Аомынь')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Аргентина')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Армения')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Аруба')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Афганистан')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Багамы')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Бангладеш')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Барбадос')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Бахрейн')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Беларусь')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Белиз')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Бельгия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Бенин')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Бермуды')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Болгария')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Боливия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Босния и Герцеговина')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Ботсвана')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Бразилия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Британская территория в Индийском океане')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Бруней')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Буркина-Фасо')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Бурунди')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Бутан')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Вануату')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Ватикан')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Великобритания')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Венгрия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Венесуэла')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Виргинские острова')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Восточный Тимор')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Вьетнам')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Габонская Республика')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Гавайи')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Гаити')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Гайана')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Гамбия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Гана')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Гваделупа')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Гватемала')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Гвинея')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Гвинея-Бисау')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Германия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Гернси')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Гибралтар')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Гондурас')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Гонконг')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Гренада')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Гренландия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Греция')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Грузия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Гуам')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Дания')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Джерси')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Джибути')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Доминика')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Доминиканская Республика')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Египет')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Замбия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Зимбабве')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Израиль')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Индия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Индонезия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Иордания')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Ирак')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Иран')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Ирландия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Исландия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Испания')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Италия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Йемен')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Кабо-Верде')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Казахстан')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Каймановы острова')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Камбоджа')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Камерун')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Канада')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Канарские острова')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Катар')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Кения')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Кипр')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Киргизия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Кирибати')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Китай')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Кокосовые острова')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Колумбия')
GO
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Коморы')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Конго')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Корейская Народно-Демократическая Республика')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Косово')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Коста-Рика')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Кот-д’Ивуар')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Куба')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Кувейт')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Кука острова')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Кюрасао')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Лаос')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Латвия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Лесото')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Либерия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Ливан')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Ливия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Литва')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Лихтенштейн')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Люксембург')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Маврикий')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Мавритания')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Мадагаскар')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Мадейра')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Майотта')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Македония')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Малави')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Малайзия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Мали')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Мальдивы')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Мальта')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Марокко')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Мартиника')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Маршалловы Острова')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Мексика')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Мелилья')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Микронезия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Мозамбик')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Молдавия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Монако')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Монголия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Монтсеррат')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Мьянма')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Мэн')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Нагорно-Карабахская Республика')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Намибия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Науру')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Непал')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Нигер')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Нигерия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Нидерланды')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Никарагуа')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Ниуэ')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Новая Зеландия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Новая Каледония')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Норвегия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Норфолк')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'ОАЭ')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Оман')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Пакистан')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Палау')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Палестина')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Панама')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Папуа — Новая Гвинея')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Парагвай')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Перу')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Питкэрн')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Польша')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Португалия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Приднестровская Молдавская Республика')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Пуэрто-Рико')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Реюньон')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Рождества остров')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Россия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Руанда')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Румыния')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Сальвадор')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Самоа')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Сан-Марино')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Сан-Томе и Принсипи')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Сахарская Арабская Демократическая Республика')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Саудовская Аравия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Свазиленд')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Святой Елены острова')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Себорга')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Северные Марианские острова')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Сейшельские Острова')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Сенегал')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Сен-Бартельми')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Сен-Мартен')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Сен-Пьер и Микелон')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Сент-Винсент и Гренадины')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Сент-Китс и Невис')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Сент-Люсия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Сербия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Сеута')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Силенд')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Синт-Маартен')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Сингапур')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Сирия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Словакия')
GO
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Словения')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Соединённые Штаты Америки')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Соломоновы Острова')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Сомали')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Сомалиленд')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Судан')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Суринам')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Сьерра-Леоне')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Таджикистан')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Таиланд')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Танзания')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Тёркс и Кайкос')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Того')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Токелау')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Тонга')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Тринидад и Тобаго')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Тувалу')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Тунис')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Туркмения')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Турция')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Уганда')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Узбекистан')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Украина')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Уоллис и Футуна')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Уругвай')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Фарерские острова')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Фиджи')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Филиппины')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Финляндия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Фолклендские острова')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Франция')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Французская Гвиана')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Французская Полинезия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Французские Южные и Антарктические Территории')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Хорватия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Центральноафриканская Республика')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Чад')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Черногория')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Чехия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Чили')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Швейцария')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Швеция')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Шпицберген')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Шри-Ланка')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Эквадор')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Экваториальная Гвинея')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Эритрея')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Эстония')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Эфиопия')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Южная Георгия и Южные Сандвичевы острова')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Южная Корея')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Южно-Африканская Республика')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Южный Судан')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Ямайка')
INSERT [dbo].[Все страны мира] ([Абхазия]) VALUES (N'Япония')
USE [master]
GO
ALTER DATABASE [Countries] SET  READ_WRITE 
GO
